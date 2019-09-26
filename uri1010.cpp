#include<stdio.h>
struct Book
{
    int price;
    int pages;
};

int main()
{
  Book b1;
  b1.price=300;
  b1.pages=260;
  Book *ptr;
  ptr=&b1;
  printf("%d %d\n",b1.price,b1.pages);
  printf("%d %d\n",(*ptr).price,ptr->pages);
  return 0;

}
