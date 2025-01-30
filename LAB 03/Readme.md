# Simple Unix-like Commands in C

This Folder contains C implementations of basic Unix-like commands, mimicking the behavior of commonly used commands. These programs are written in C to demonstrate file manipulation, data processing, and command-line operations. The goal is to understand how each of these commands works under the hood.

## File Descriptions

### `cat.c`
- This program mimics the `cat` command.
- It reads the contents of one or more files and displays them to the standard output.
- To run the program use:
  ```bash
  gcc cat.c
  ```

### `cp.c`
- This program mimics the `cp` (copy) command.
- It copies the content of a source file to a destination file.

### `grep.c`
- This program mimics the `grep` command.
- It searches for a specified pattern in a file and displays all lines that match the pattern.

### `ls.c`
- This program mimics the `ls` command.
- It lists the files and directories in the current directory or the specified directory.

### `mv.c`
- This program mimics the `mv` (move) command.
- It moves or renames files or directories.

### `rm.c`
- This program mimics the `rm` (remove) command.
- It deletes specified files or directories.

## Compilation and Usage

To compile the programs, you can use `gcc`:

```bash
gcc cat.c
gcc cp.c
gcc grep.c
gcc ls.c
gcc mv.c
gcc rm.c
```
