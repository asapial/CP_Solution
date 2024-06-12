import java.util.Scanner;

class Staff {
    protected int code;
    protected String name;

    public void input() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("\nEnter code: ");
        code = scanner.nextInt();
        System.out.print("Enter name: ");
        name = scanner.next();
    }

    public void display() {
        System.out.println("\nCode: " + code);
        System.out.println("Name: " + name);
    }
}

class Education {
    protected String educationalQualification;
    protected String professionalQualification;

    public void input() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Educational Qualification: ");
        educationalQualification = scanner.next();
        System.out.print("Enter Professional Qualification: ");
        professionalQualification = scanner.next();
    }

    public void display() {
        System.out.println("Educational Qualification: " + educationalQualification);
        System.out.println("Professional Qualification: " + professionalQualification);
    }
}

class Teacher extends Staff {
    protected String subject;
    protected String publication;
    private Education education = new Education();

    public void input() {
        super.input();
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter subject: ");
        subject = scanner.next();
        System.out.print("Enter publication: ");
        publication = scanner.next();
        education.input();
    }

    public void display() {
        super.display();
        System.out.println("Subject: " + subject);
        System.out.println("Publication: " + publication);
        education.display();
    }
}

class Officer extends Staff {
    protected String grade;
    private Education education = new Education();

    public void input() {
        super.input();
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter grade: ");
        grade = scanner.next();
        education.input();
    }

    public void display() {
        super.display();
        System.out.println("Grade: " + grade);
        education.display();
    }
}

class Typist extends Staff {
    protected double speed;

    public void input() {
        super.input();
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter speed: ");
        speed = scanner.nextDouble();
    }

    public void display() {
        super.display();
        System.out.println("Speed: " + speed);
    }
}

class Regular extends Typist {
    protected double salary;

    public void input() {
        super.input();
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter monthly salary: ");
        salary = scanner.nextDouble();
    }

    public void display() {
        super.display();
        System.out.println("Salary: " + salary);
    }
}

class Causal extends Typist {
    protected double salary;

    public void input() {
        super.input();
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter daily salary: ");
        salary = scanner.nextDouble();
    }

    public void display() {
        super.display();
        System.out.println("Salary: " + salary);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice;
        System.out.print("Enter 1 for teacher\nEnter 2 for typist\nEnter 3 for officer\nEnter your choice: ");
        choice = scanner.nextInt();

        switch (choice) {
            case 1:
                Teacher teacher = new Teacher();
                teacher.input();
                teacher.display();
                break;
            case 3:
                Officer officer = new Officer();
                officer.input();
                officer.display();
                break;
            case 2:
                System.out.print("Enter 1 for regular\nEnter 2 for causal\nEnter your choice: ");
                int subtypeChoice = scanner.nextInt();
                if (subtypeChoice == 1) {
                    Regular regular = new Regular();
                    regular.input();
                    regular.display();
                } else if (subtypeChoice == 2) {
                    Causal causal = new Causal();
                    causal.input();
                    causal.display();
                }
                break;
        }
    }
}
