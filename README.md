# snob
tried to replicate git.
`snob` is a satire name

# libraries Used
- all good doc of libs ar in https://pubs.opengroup.org/
- `<sys/stat.h>` -> to make directories [doc](https://pubs.opengroup.org/onlinepubs/7908799/xsh/sysstat.h.html) and also needed to write function in lib 3rd.
- `<fcntl.h>` -> [doc](https://pubs.opengroup.org/onlinepubs/009695399/basedefs/fcntl.h.html) to create or open files
```cpp
    mkdir(".shadow",0755);
	int fd = open(".shadow/HEAD", O_WRONLY | O_CREAT | O_TRUNC, 0644);
```
- `<unistd.h>` -> write 
```cpp
    int fd = open("hello.txt", O_WRONLY | O_CREAT, 0644);
    std::string content = "Hello World";
    write(fd, content.c_str(), content.size());
    close(fd);
```
- `fstream` -> file stream to change into blob
- `sstream` -->