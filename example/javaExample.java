public class javaExample {
    public int a = 10;
    private double b = 0.0;

    public double add(int aa, double bb){
        double c = 0.1;
        if (a == 0) {
            c = aa + bb;
        } else {
            c = 10.1;
        }
        return c;
    }
    public static void main(String[] args) {
        javaExample je = new javaExample();
        for (int i = 0; i < args.length; i++) {
            double ee = je.add(i, je.b);
            System.out.println(ee);
        }
    }
}