class table
{
String name;
int rows;
int columns;
public table(String name,int rows,int columns)
{
this.name=name;
this.rows=rows;
this.columns=columns;
}
public void adetails()
{
System.out.println(name);
System.out.println(rows);
System.out.println(columns);
}
}

class u2
{
public static void main(String[] args)
{
table w1=new table("employees",8,9);
w1.adetails();
table w2=new table("datatypes",2,3);
w2.adetails();
}
}