import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Calculator {
    public int exam_adi(int num1, int num2) {
        return num1 + num2;
    }

    public int exam_sub(int num1, int num2) {
        return num1 - num2;
    }

    public int exam_multi(int num1, int num2) {
        return num1 * num2;
    }

    public double exam_divi(int num1, int num2) {
        if (num2 == 0) {
            System.out.println("Cannot divide by zero");
            return Double.NaN;
        } else {
            return (double) num1 / num2;
        }
    }

    public static void main(String[] args) {
        Calculator calculator = new Calculator();
        try {
            File file = new File("input.txt");
            Scanner scanner = new Scanner(file);
            while (scanner.hasNextLine()) {
                String line = scanner.nextLine();
                String[] data = line.split(" ");
                if (data.length != 3) {
                    System.out.println("Invalid");
                    continue;
                }
                int num1 = Integer.parseInt(data[0]);
                char operator = data[1].charAt(0);
                int num2 = Integer.parseInt(data[2]);
                int ans;
                switch (operator) {
                    case '+':
                        ans = calculator.exam_adi(num1, num2);
                        System.out.println(num1 + " + " + num2 + " = " + ans);
                        break;
                    case '-':
                        ans = calculator.exam_sub(num1, num2);
                        System.out.println(num1 + " - " + num2 + " = " + ans);
                        break;
                    case '*':
                        ans = calculator.exam_multi(num1, num2);
                        System.out.println(num1 + " * " + num2 + " = " + ans);
                        break;
                    case '/':
                        double divisionResult = calculator.exam_divi(num1, num2);
                        if (!Double.isNaN(divisionResult)) {
                            System.out.println(num1 + " / " + num2 + " = " + divisionResult);
                        }
                        break;
                    default:
                        System.out.println("Invalid operator: " + operator);
                        break;
                }
            }
            scanner.close();
        } catch (FileNotFoundException e) {
            System.out.println("File not found");
            e.printStackTrace();
        }
    }
}
