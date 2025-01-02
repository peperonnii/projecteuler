use std::env;
use std::fs;
use std::io;
use std::process::Command;

fn main() -> io::Result<()> {
    // Step 1: Take user input
    println!("Enter the directory number to search for:");
    let mut input = String::new();
    io::stdin().read_line(&mut input)?;
    let search_value: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            eprintln!("Please enter a valid number.");
            return Ok(());
        }
    };

    // Step 2: Read directories in the current scope
    let current_dir = env::current_dir()?;
    let mut directories: Vec<i32> = fs::read_dir(&current_dir)?
        .filter_map(|entry| {
            entry.ok()?.file_name().to_str()?.parse::<i32>().ok()
        })
        .collect();

    // Step 3: Sort directories numerically
    directories.sort();

    // Step 4: Perform binary search
    match directories.binary_search(&search_value) {
        Ok(index) => {
            let dir_name = directories[index].to_string();
            println!("Found directory: {}", dir_name);

            // Step 5: Change directory
            let new_dir = current_dir.join(&dir_name);
            env::set_current_dir(&new_dir)?;

            // Step 6: Execute `bat` on the solution file
            let solution_file = find_solution_file(&new_dir)?;
            Command::new("bat")
                .arg(&solution_file)
                .status()?;
        }
        Err(_) => {
            println!("Directory {} not found.", search_value);
        }
    }

    Ok(())
}

// Helper function to find the solution file
fn find_solution_file(dir: &std::path::Path) -> io::Result<String> {
    for entry in fs::read_dir(dir)? {
        let entry = entry?;
        let path = entry.path();
        if let Some(ext) = path.extension() {
            if ext == "rs" || ext == "py" || ext == "java" || ext == "cpp" { // Add other extensions as needed
                return Ok(path.to_string_lossy().to_string());
            }
        }
    }
    Err(io::Error::new(io::ErrorKind::NotFound, "No solution file found."))
}

