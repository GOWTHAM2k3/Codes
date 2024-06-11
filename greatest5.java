class greatest5
{
public static void main(String[]args)
{
int n1=12;
int n2=9;
int n3=6;
int n4=5;
int n5=3;
if(n1>n2 && n1>n3 && n1>n4 &&n1>n5)
{
System.out.println(n1+ " "+"is greatest");
}
else if(n2>n3 && n2>n4 && n2>n5)
{
System.out.println(n2+ " "+"is greatest");
}
else if(n3>n4 && n3>n5)
{
System.out.println(n3+ " "+"is greatest");
}
else if(n4>n5)
{
System.out.println(n4+ " "+"is greatest");
}
else
{
System.out.println(n5+ " "+"is greatest");
}
}
}