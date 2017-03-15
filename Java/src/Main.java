
import javax.swing.JOptionPane;

public class Main
{
    // metodo para mostrar el menu
    public static int menu()
    {
        // declaro una variable de tipo entero opc
        int opc;
        do
        {
            opc = Integer.parseInt(JOptionPane.showInputDialog("====== MENU ====== \n" +
                "1. Suma\n" +
                "2. Resta\n" +
                "3. Multiplicacion\n" +
                "4. Division\n" +
                "5. Modulo\n" +
                "6. Salir\n\n" +
                "Seleccione una opc del 1 al 6"));
        }
        while(opc < 0 || opc > 6);
        return opc;
    }
    public static void main(String[] args)
    {
        // creo un objeto de la clase OperacionAritmetica (Instanciación)
        OperacionAritmetica obj = new OperacionAritmetica();
        // declaro dos variables de tipo entero: n1 y n2
        int n1, n2;
        // declaro una variable de tipo entero opcion
        int opcion;
        do
        {
            // pido el numero 1 al usuario
            n1 = Integer.parseInt(JOptionPane.showInputDialog("Digite numero 1"));
            // encapsulo la variable n1
            obj.setNumero1(n1);
            // pido el numero 2 al usuario
            n2 = Integer.parseInt(JOptionPane.showInputDialog("Digite numero 2"));
            // encapsulo la variable n2
            obj.setNumero2(n2);
            // repetire todas estas intrucciones hasta que la opcion del menu sea diferente a 6, eso significa que si el
            // usuario digita 6 como opcion el programa terminara
            opcion = menu();
            // dependiendo del valor que retorne el metodo menu se seleccionara un caso para su respectiva operación
            switch(opcion)
            {
                case 1:
                    JOptionPane.showMessageDialog(null, "La suma de " + obj.getNumero1() + " + " + obj.getNumero2() + " es: " + obj.suma());
                    break;
                case 2:
                    JOptionPane.showMessageDialog(null, "La resta de " + obj.getNumero1() + " - " + obj.getNumero2() + " es: " + obj.resta());
                    break;
                case 3:
                    JOptionPane.showMessageDialog(null, "La multiplicacion de " + obj.getNumero1() + " * " + obj.getNumero2() + " es: " + obj.multiplicacion());
                    break;
                case 4:
                    JOptionPane.showMessageDialog(null, "La division de " + obj.getNumero1() + " / " + obj.getNumero2() + " es: " + obj.division());
                    break;
                case 5:
                    JOptionPane.showMessageDialog(null, "El modulo o resto entre " + obj.getNumero1() + " y " + obj.getNumero2() + " es: " + obj.modulo());
                    break;
                default:
                    break;
            }
        }
        while(opcion != 6);
    }
}