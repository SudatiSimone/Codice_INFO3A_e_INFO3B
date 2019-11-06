
public class main {

	public static void main(String[] args) {
		Studente s1=new Studente("simone", "sudati", 1044);
		Studente s2=new Studente("simone", "sudati", 1044);
		Studente s3=new Studente("simone", "sudati", 1000);
		
		System.out.println(s1.equals(s1));//True
		System.out.println(s1.equals(s2));//True
		System.out.println(s1.equals(s3));//False
		System.out.println(s1.compareTo(s1));// 0
		System.out.println(s1.compareTo(s2));// 0
		System.out.println(s1.compareTo(s3));// 1
		System.out.println(s3.compareTo(s2));//-1
	}

}
