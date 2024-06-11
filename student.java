class student
{
String name;
int id;
long contactno;
public void study()
{
System.out.println("study");
}
public static void main(String[] args)
{
student s1=new student();
student s2=new student();
s1.name="mala";
s1.id=52;
s1.contactno=895122;

s2.name="ram";
s2.id=12;
s2.contactno=901942;

System.out.println(s1.name);
System.out.println(s1.id);
System.out.println(s1.contactno);
System.out.println(s2.name);
System.out.println(s2.id);
System.out.println(s2.contactno);
}
} 