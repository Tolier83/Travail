interface PersonneInterface{
      public void vieillir();
      public void clonerPersonne(Personne p);
}

class Personne implements PersonneInterface{
      private String nom ;
      private String prenom ;
      private int age ;

      public Personne (String nom, String prenom, int age){
            majNom(nom);
            majPrenom(prenom);
            majAge(age);
      }

      public void vieillir(){
           age++;
      }

      public String retournerNom(){
            return this.nom;
      }

      public String retournerPrenom(){
            return this.prenom;
      }

      public int retournerAge(){
            return this.age;
      }

      public void majNom(String nom){
            this.nom=nom;
      }

      public void majPrenom(String prenom){
            this.prenom=prenom;
      }

      public void majAge(int age){
            this.age=age;
      }

      public void clonerPersonne(Personne p){
            p.age = this.age;
            p.nom = this.nom;
            p.prenom = this.prenom;

      }

      public void afficheInformations(){
           System.out.println("Je suis la personne "+nom+" "+prenom+" et d'age "+age+ " ans");
      }

}

class Etudiant extends Personne {

      int numEtudiant;
      String nomUniversite;

      public Etudiant (String nom, String prenom, int age, int numEtudiant, String nomUniversite){
            
            super(nom,prenom,age);
            this.numEtudiant = numEtudiant;
            this.nomUniversite = nomUniversite;

      }

      public void afficheInformations(){
            System.out.println("Je suis l'etudiant "+retournerNom()+" "+retournerPrenom()+ " d'age "+retournerAge()+" ans identifie par "+numEtudiant+" et etudiant a "+nomUniversite);
      }
}

public class MonProgramme {

      public static void main(String args[]){
            try{
                  Personne p = new Personne("Martin", "Pierre", 30);
                  Etudiant e = new Etudiant("Dupond", "Jacques", 20, 12345, "La Garde");
                  p.afficheInformations();
                  e.afficheInformations();

                  
                  Personne p1 = new Personne("Durand", "Jean", 60);
                  Personne p2 = new Personne("Fournier", "Paul", 50);
                  p1=p2;
                  p2.vieillir();
                  p2.vieillir();
                  p1.vieillir();
                  p1.afficheInformations();
                  p2.afficheInformations();
                  
                  Personne p3=new Personne("Roche", "Nicolas", 35);
                  p.clonerPersonne(p3);
                  p3.vieillir();
                  p.afficheInformations();
                  p3.afficheInformations();
                  

            }
            catch (Exception e){
                  e.printStackTrace() ;
            }
      }
}
