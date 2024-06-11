class demo4
{
public static void main(String[] args)
{
String r1=eo(5,6);
String r2=eo(89,1);
System.out.println(r1);
System.out.println(r2);
}
public static String eo(int n)
{
if (n%2==0)
return "even";
else
return "odd";
}
}
