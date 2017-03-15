#ifndef OPERADORARITMETICO_H
#define OPERADORARITMETICO_H


class OperadorAritmetico
{
    public:
        OperacionAritmetica()
        {
            // inicializamos los atributos de la clase en 0, en el constructor
            numero1 = 0;
            numero2 = 0;
        }

        // fijammos el valor del numero 1
        void setNumero1(int n)
        {
            numero1 = n;
        }

        // obtenemos el valor del numero 1
        int getNumero1()
        {
            return numero1;
        }

        // fijammos el valor del numero 2
        void setNumero2(int n)
        {
            numero2 = n;
        }

        // obtenemos el valor del numero 2
        int getNumero2()
        {
           return numero2;
        }

        // método para sumar
        int suma()
        {
            // retornamos la suma del numero 1 mas el numero 2
            return getNumero1() + getNumero2();
        }

        // método para restar
        int resta()
        {
            // retornamos la resta del numero 1 menos el numero 2
            return getNumero1() - getNumero2();
        }

        // método para multiplicar
        int multiplicacion()
        {
            // retornamos la multiplicacion del numero 1 por el numero 2
            return getNumero1() * getNumero2();
        }

        // método para multiplicar
        float division()
        {
            // retornaremos la division del numero 1 entre el numero 2, recuerda que normalmente el resultado de la division
            //puede ser un numero decimal es por eso que convierto los dos numeros a float
            return (float) getNumero1() / (float) getNumero2();
        }

        int modulo()
        {
            // retornamos el resto o modulo del numero 1 entre el numero 2
            return getNumero1() % getNumero2();
        }
    protected:

    private:
        // metodos privados de la clase
        int numero1;
        int numero2;
};

#endif // OPERADORARITMETICO_H
