public class Student extends Person {
    private String[] status={"freshmen","sophomore","junior","senior"};
    private int i;
    Student(){

    }
    Student(String name,String address,String phoneNumber,String EmailAddress,int status){
        super(name,address,phoneNumber,EmailAddress);
        setStatus(status);
    }

    public void setStatus(int status) {
        i=status;
    }

    public String getStatus() {
        switch (i){
                case 1:
                    return status[0];
                case 2:
                    return status[1];
                case 3:
                    return status[2];
                case 4:
                    return status[3];
                default:
                    return status[0];
        }
    }

    @Override
    public String toString() {

        return "Student: \n"+super.toString()+" \n"+getStatus()+" \n";
    }
}
