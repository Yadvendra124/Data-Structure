import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

class Employee {
    private String name;
    private Date dateOfJoin;
    private double salary;
    private String department;

    public Employee(String name, String dateOfJoin, double salary, String department) throws ParseException {
        this.name = name;
        this.dateOfJoin = new SimpleDateFormat("yyyy-MM-dd").parse(dateOfJoin);
        this.salary = salary;
        this.department = department;
    }

    public int getTotalExperience() {
        Date today = new Date();
        int experience = today.getYear() - dateOfJoin.getYear();
        if (today.getMonth() < dateOfJoin.getMonth() || 
            (today.getMonth() == dateOfJoin.getMonth() && today.getDate() < dateOfJoin.getDate())) {
            experience--;
        }
        return experience;
    }

    public void displayDetails() {
        SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd");
        System.out.println("Name: " + name);
        System.out.println("Date of Joining: " + dateFormat.format(dateOfJoin));
        System.out.println("Total Experience: " + getTotalExperience() + " years");
        System.out.println("Salary: " + salary);
        System.out.println("Department: " + department);
        System.out.println("------------------------------");
    }
}

public class get {
    public static void main(String[] args) {
        try {
            Employee[] employees = {
                new Employee("John Doe", "2015-06-01", 75000, "Software Engineering"),
                new Employee("Jane Smith", "2018-09-15", 68000, "Marketing"),
                new Employee("Emily Davis", "2020-01-20", 62000, "Human Resources")
            };

            for (Employee employee : employees) {
                employee.displayDetails();
            }
        } catch (ParseException e) {
            e.printStackTrace();
        }
    }
}
