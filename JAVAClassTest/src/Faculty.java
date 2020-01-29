public class Faculty extends Employee {
    private double officeHour;
    private int rank;

    Faculty(){

    }

    Faculty(String name,String address,String phoneNumber,String EmailAddress,String office,double salary,String dateHired,double officeHour,int rank){
        super(name,address,phoneNumber,EmailAddress,office,salary,dateHired);
        setOfficeHour(officeHour);
        setRank(rank);
    }
    public void setOfficeHour(double officeHour) {
        this.officeHour = officeHour;
    }

    public void setRank(int rank) {
        this.rank = rank;
    }

    public double getOfficeHour() {
        return officeHour;
    }

    public int getRank() {
        return rank;
    }

    @Override
    public String toString() {
        return "Faculty: \n"+super.toString()+" \n"+getOfficeHour()+" \n"+getRank()+" \n";
    }
}
