# Learnings
- `.dSYM` extension files are debug files
- Those nameless file are executable files, just `.filename` will execute in terminal -> Shell specific
- `POSIX` - C/C++ thread API - Portable Operating System Interface
    - Used to create directories

# Command
```bash
git merge master --no-ff -m "Merge message"
│   │     │      │       │  │
│   │     │      │       │  └─ argument/value for -m flag
│   │     │      │       └─ short flag with value
│   │     │      └─ long flag (switch/boolean)
│   │     └─ positional argument (required)
│   └─ subcommand
└─ main command/program
```
# GIT
- git uses POSIX and manipulate files 