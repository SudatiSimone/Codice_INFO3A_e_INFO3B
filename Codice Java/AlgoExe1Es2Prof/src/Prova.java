import java.util.*;
 
/**
 * @author Enrico Bacis and Patrizia Scandurra
 */
public class Prova
{
    public static void main(String[] args)
    {
         
        VerificaDupList checker = new VerificaDupList();
 
        //La lista è implementata tramite un ArrayList
        //List<Studente> students = new ArrayList<Studente>();
        //La lista è implementata tramite una LinkedList
        List<Studente> students = new LinkedList<Studente>();
        students.add(new Studente(1, "Quentin", "Cavendish"));
        students.add(new Studente(2, "Rupert",  "Salisbury"));
        students.add(new Studente(3, "Nigel",   "Wilson"));
        System.out.println("1) Duplicates found: " + checker.verificaDup(students));
         
        // Si iscrive un nuovo studente omonimo a quello con la matricola 2
        // Non è comunque un duplicato.
        students.add(new Studente(4, "Rupert",  "Salisbury"));
        System.out.println("2) Duplicates found: " + checker.verificaDup(students));
         
        // Si iscrive un nuovo studente ma gli viene assegnata una matricola
        // già  nella lista, tuttavia lo studente potrebbe essere di un'altra
        // università , non viene quindi segnalato il duplicato.
        students.add(new Studente(2, "Terrance", "Pelham"));
        System.out.println("3) Duplicates found: " + checker.verificaDup(students));
         
        // Viene ora salvato nella lista uno studente che ha uguale matricola,
        // nome e cognome di un altro. 
        students.add(new Studente(1, "Quentin",  "Cavendish"));
        System.out.println("4) Duplicates found: " + checker.verificaDup(students));
         
         
         
         
        }
}