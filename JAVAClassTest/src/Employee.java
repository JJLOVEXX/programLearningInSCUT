public class Employee extends Person{
    private String office;
    private double salary;
    private String dateHired;

    Employee(){

    }

    Employee(String name,String address,String phoneNumber,String EmailAddress,String office,double salary,String dateHired) {
        super(name,address,phoneNumber,EmailAddress);
        setOffice(office);
        setSalary(salary);
        setDateHired(dateHired);
    }
    public void setOffice(String office) {
        this.office = office;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public void setDateHired(String dateHired) {
        this.dateHired = dateHired;
    }

    public String getOffice() {
        return office;
    }

    public double getSalary() {
        return salary;
    }

    public String getDateHired() {
        return dateHired;
    }

    @Override
    public String toString() {
        return super.toString()+" \n"+getOffice()+" \n"+getSalary()+" \n"+getDateHired()+" \n";
    }
}
