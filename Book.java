class book
{
String title;
String author;
int pages;
public void read()
{
System.out.println("read");
}
public static void main(String[] args)
{
book s1=new book();
book s2=new book();
s1.title="romeo";
s1.author="dev";
s1.pages=895;

s2.title="the wife";
s2.autor="harsh";
s2.pages=901;

System.out.println(s1.title);
System.out.println(s1.author);
System.out.println(s1.pages);
System.out.println(s2.title);
System.out.println(s2.author);
System.out.println(s2.pages);
}
} 