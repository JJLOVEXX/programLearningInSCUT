public class Staff extends Employee {
    private String title;

    Staff(){

    }

    Staff(String name,String address,String phoneNumber,String EmailAddress,String office,double salary,String dateHired,String title){
        super(name,address,phoneNumber,EmailAddress,office,salary,dateHired);
        setTitle(title);
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getTitle() {
        return title;
    }

    @Override
    public String toString() {
        return super.toString()+" \n"+getTitle();
    }
}
