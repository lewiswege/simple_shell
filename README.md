This simple shell project is a fundamental component of modern operating systems, allowing users to interact with the system through a command-line interface.

 It works by utilizing a series of system calls to execute commands and manage processes. When a user enters a command,it uses system calls like:

    °fork() to create a new process. This new process

    °Then employs exec() to replace itself with the desire     d command, such as 'ls' or 'pwd.' The shell waits for      the child process to finish using wait(). 

 It provides a user-friendly interface for running programs and managing system resources.This project aims to demonstrate a fundamental understanding of process management and system calls, making it an educational and practical endeavor for our team.
