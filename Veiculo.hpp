class Veiculo { // isso é uma classe abstrata, justamente pelo fato de n ter um constructor
    public:
        int vel;
        int blind;
        int rodas;
        void setTipo(int tp);
        void setvelMax(int vm);
        void setArma(bool ar);
        void imp();
    protected: // it has to be protected otherwise the Moto class wont have these values so the set functions will fail
        int velMax;
        int tipo;
        bool arma;
};

