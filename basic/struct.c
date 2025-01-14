// 结构体
#include <stdio.h>

struct stu
{
  char name[20];
  int age;
  float score;
};


int main(){
  // 初始化结构体
  struct stu s = {"zhangsan", 20, 90.0};
  printf("%s\n", s.name);
  printf("%d\n", s.age);
  printf("%f\n", s.score);

  struct stu* ps = &s;

  printf("name = %s,age=%d,score=%f\n", ps -> name, ps -> age, ps -> score);
  return 0;
}

