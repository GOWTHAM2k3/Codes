class whatsapp
{
String name;
long cno;
public whatsapp(String name,long cno)
{
this.name=name;
this.cno=cno;
}
public void adetails()
{
System.out.println(name);
System.out.println(cno);
}
}

class u1
{
public static void main(String[] args)
{
whatsapp w1=new whatsapp("sandhya",8951454182l);
w1.adetails();
}
}