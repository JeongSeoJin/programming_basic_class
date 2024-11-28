#include <stdio.h>

int main(void) {
    char *p = "HelloWorld"; /* in this case, *p is saved in data segment(which can be modified)
    and "HelloWorld" is memorized in text segment respectively*/
    // strcopy(p, "GOODBYE"); // this action means that "I'm going to modify "HelloWorld" in text segment to "GOODBYE"." this method makes compile error.
    // strcopy 는 p의 주소를 따라가서 그 메모리의 내용을 수정하는 것이기 때문에 컴파일 에러가 발생하는 것.
    printf("%s\n", p);
    // but this approach is executable
    p = "GOODBYE"; // p에 GOODBYE의 주소를 저장하는 것. 
    printf("%s\n", p); 

    char *movies[10] = {"transformer", "cats", "sound of music"};

    for (int i = 0; i < 3; i ++) {
        printf("%s\n", movies[i]);
    }

    for (int i = 0; i < 3; i ++) {
        printf("%s\n", *(movies + i));
    }



    return 0;
}