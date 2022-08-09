import java.util.Scanner;
public class triangle {
    int base,height,area;
    public  void input(){
    System.out.println("Enter the base of the triangle");
    System.out.println("Enter the height of the triangle"); 
    Scanner sc=new Scanner(System.in);
    base=sc.nextInt();
    height=sc.nextInt();
    }
    public void compute(){
        area=(base*height)/2;
    }
    public void display(){
    System.out.println("Area of triangle is"+area);
    }
    public static void main(String args[]){ 
    triangle obj=new triangle();
    obj.input();
    obj.compute();
    obj.display();
    
    }
    
}