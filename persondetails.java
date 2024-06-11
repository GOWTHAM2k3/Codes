import java.util.Scanner;
class persondetails
{
public static void main(String[] args)
{
Scanner input=new Scanner(System.in);
System.out.println("enter your name");
String name = input.nextLine();
System.out.println("enter your age");
int age = input.nextInt();
System.out.println("enter your height");
float height = input.nextFloat();
System.out.println("enter your weight");
float weight = input.nextFloat();
System.out.println("enter your contactnumber");
long contactnumber = input.nextLong();
System.out.println("name");
System.out.println("age");
System.out.println("height");
System.out.println("weight");
System.out.println("contactnumber");
}
}
