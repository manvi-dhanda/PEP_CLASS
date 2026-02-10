import java.util.*;
class user{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println("Add:"+(a+b));
        System.out.println("Sub:"+(a-b));
        System.out.println("Multi:"+(a*b));
        System.out.println("Division:"+(a/b));
        System.out.println("Bitwise left:"+(a<<b));
        System.out.println("Bitwise right:"+(a>>b));


    }
}

