#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(){
  struct direct *file;
  struct stat st;
  int size = 0;
  DIR *director = opendir(".");

  printf("directory:\n");
  while(file = readdir(director)){
    if(file -> director_type == DT_DIR){
      printf("directory name: %s\n", file-> director_name);
    }
  }
  director = opendir(".");
  printf("files:\n");
  while (file = readdir(d)) {
    if (file -> director_type == DT_REG) {
      stat(files -> director_name, &st);
      size += st.st_size;
      printf("name: %s\n", file -> director_name);
    }
    file = readdir(director);
  }
  closedir(director);
  printf("size of files: %d\n", size); 
  return 0;
}
