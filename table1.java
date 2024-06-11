class table1
{
String name;
int rows;
int columns;
public table1(String name,int rows,int columns)
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
public static void main(String[] args)
{
table1 w1=new table1("employees",8,9);
w1.adetails();
table1 w2=new table1("datatypes",2,3);
w2.adetails();
}
}