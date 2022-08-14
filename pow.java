import java.util.Scanner;
import java.lang.Math;
public class pow{
    float a,b,c;
    public void input(){
        Scanner sc= new Scanner(System.in);
        System.out.println("enter first number");
        a=sc.nextInt();
        System.out.println("enter the second number");
        b=sc.nextInt();

    }
    public void compute(){
        c=(float)Math.pow(a,2)+(float)Math.pow(b,2);
    }
    public void display(){
        System.out.println("the sum of is"+c);
    }
    public static void main(String[]args){
        pow obj1= new pow();
        obj1.input();
        obj1.compute();
        obj1.display();

    }
}
