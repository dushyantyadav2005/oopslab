import java.util.Scanner;
// import java.util.*;

class employee{
    private String name;
    private String lastName;
    private double monthly_salary;
    employee(Scanner input)
    {
        System.out.println("enter name : ");
        name=input.nextLine();
        System.out.println("Enter last name: ");
        lastName=input.nextLine();
        System.out.println("Enter monthly salary : ");
        monthly_salary=input.nextDouble();
        input.nextLine(); 
    }
    public void setter(Scanner input)
    {
        System.out.println("enter name : ");
        name=input.nextLine();
        System.out.println("Enter last name: ");
        lastName=input.nextLine();
        System.out.println("Enter monthly salary : ");
        monthly_salary=input.nextDouble();
        input.nextLine(); 
    }
    public void getter()
    {
        System.out.println("name is "+name);
        System.out.println(" last name is "+lastName);
        System.out.println("monthly salary : "+monthly_salary);
    }
    public double yearly_salary()
    {
        return monthly_salary*12;
    }
    public void hike(double a)
    {
        monthly_salary+=a*0.01*monthly_salary;
    }
}

public class q3 {
    public static void main(String[] args) {
        Scanner s1=new Scanner(System.in);
        employee e1=new employee(s1);
    //    e1.setter(s1);
       e1.getter();
       System.out.println(e1.yearly_salary());
       e1.hike(1.2);
       e1.getter();
    }
}
