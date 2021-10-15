package funLearing;
import java.util.Scanner;
abstract class Selection{
	public Selection() {
		System.out.println("Welcome To Digital Claculator");
		System.out.println("1] Addition = + ");
		System.out.println("2] Substraction = - ");
		System.out.println("3] Multiplication = * ");
		System.out.println("4] Division  = % ");
		System.out.print("Select The Operator You Want To Perform From Blow List Of Operations = ");
	}
	abstract public double Addition();
	abstract public double Substraction();
	abstract public double Multiplication();
	abstract public double Division();
	abstract public void Final();
}
class Operation extends Selection{
	Scanner sc = new Scanner(System.in);
	char Operator = sc.nextLine().charAt(0);
	double A;
	double B;
	double sum=0;
	double result = 0;
	public 	Operation(double A , double B) {
		this.A = A;
		this.B = B;
	}
	public double Addition() {
		sum = A+B;
		System.out.print("Your Result Of Addition is = ");
		return sum;
	}
	public double Substraction() {
		sum = A-B;
		System.out.print("Your Result Of Substraction is = ");
		return sum;
	}
	public double Multiplication() {
		sum = A*B;
		System.out.print("Your Result Of Multiplication is = ");
		return sum;
	}
	public double Division() {
		sum = A%B;
		System.out.println("Your Result Of Division is = ");
		return sum;
	}
	public void Final() { 
		switch(Operator) {
		case '+' : 
			result = Addition();
			System.out.println(result);
			break;
		case '-' :
			result = Substraction();
			System.out.println(result);
			break;
		case '*':
			result = Multiplication();
			System.out.println(result);
			break;
		case '%':
			result = Division();
			System.out.println(result);
			break;
		default :
			System.out.println(" INVALID OPRATOR !!");
		}
	}
	

}


public class Digital_Calculator_With_Help_Of_Abstract_Class_And_Concrete_Class {
	public static void main(String args[]) {
	      Selection s = new Operation(24,30);
	      s.Final();
	}

}
