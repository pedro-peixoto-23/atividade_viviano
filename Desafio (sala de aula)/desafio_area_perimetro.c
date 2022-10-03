#include <stdio.h>

void imprimirAreaPerimetro(float area, float perimetro) {
	printf("\n-------------------------");
	printf("\n- Area: %.2f", area);
	printf("\n- Perimetro: %.2f", perimetro);
	printf("\n-------------------------");
}

int main() {
    
	int respostaUsuario;

	printf("| Escolha uma das opcoes abaixo\n");
	printf("\n| 1. Triangulo\n| 2. Retangulo\n| 3. Quadrado\n| 4. Trapezio\n| 5. Losango\n| 6. Circulo\n");

	printf("\n- Insira a opcao desejada: ");
	scanf("%d", &respostaUsuario);

	switch (respostaUsuario) {

	case 1: ; // caso o usuario escolha triangulo
		float lado1Triangulo, lado2Triangulo, lado3Triangulo;

		printf("\n| Dados do triangulo\n");
		printf("- Lado 1: ");
		scanf("%f", &lado1Triangulo);
		printf("- Lado 2: ");
		scanf("%f", &lado2Triangulo);
		printf("- Lado 3: ");
		scanf("%f", &lado3Triangulo);

		float perimetroTriangulo = lado1Triangulo + lado2Triangulo + lado3Triangulo;
		float semiPerimetro = perimetroTriangulo / 2;
		// a area do triangulo esta sendo calculada atraves da formula de Heron (usando semiperimetro e todos os lados)
		float areaTriangulo = sqrt(semiPerimetro * (semiPerimetro - lado1Triangulo) * (semiPerimetro - lado2Triangulo) * (semiPerimetro - lado3Triangulo));

		imprimirAreaPerimetro(areaTriangulo, perimetroTriangulo);

		break;

	case 2: ; // caso o usuario escolha retangulo
		float baseRetangulo, alturaRetangulo;

		printf("\n| Dados do retangulo");

		printf("\n| Insira a base do retangulo: ");
		scanf("%f", &baseRetangulo);

		printf("| Insira a altura do retangulo: ");
		scanf("%f", &alturaRetangulo);

		float areaRetangulo = baseRetangulo * alturaRetangulo;
		float perimetroRetangulo = (baseRetangulo + alturaRetangulo) * 2;

		imprimirAreaPerimetro(areaRetangulo, perimetroRetangulo);

		break;

	case 3: ; // caso o usuario escolha quadrado
		float ladoQuadrado;

		printf("\n| Dados do quadrado");

		printf("\n| Insira o lado do quadrado: ");
		scanf("%f", &ladoQuadrado);

		float areaQuadrado = ladoQuadrado * ladoQuadrado;
		float perimetroQuadrado = ladoQuadrado * 4;

		imprimirAreaPerimetro(areaQuadrado, perimetroQuadrado);

		break;

	case 4: ; // caso o usuario escolha trapezio
		float baseMaiorTrapezio, baseMenorTrapezio, alturaTrapezio;
		float lado3Trapezio, lado4Trapezio; // obs.: o lado 1 e 2 ja sao a base maior e menor do trapezio

		printf("\n| Dados do trapezio\n");

		printf("\n| Dados para a area do trapezio\n");

		printf("- Base maior do trapezio: ");
		scanf("%f", &baseMaiorTrapezio);

		printf("- Base menor do trapezio: ");
		scanf("%f", &baseMenorTrapezio);

		printf("- Altura do trapezio: ");
		scanf("%f", &alturaTrapezio);

		printf("\n| Dados para o perimetro do trapezio\n");

		printf("- Lado 1: %.1f\n", baseMaiorTrapezio); // o lado 1 ja e a base maior
		printf("- Lado 2: %.1f\n", baseMenorTrapezio); // o lado 2 ja e a base menor
		printf("- Lado 3: ");
		scanf("%f", &lado3Trapezio);
		printf("- Lado 4: ");
		scanf("%f", &lado4Trapezio);

		float areaTrapezio = ((baseMaiorTrapezio + baseMenorTrapezio) * alturaTrapezio) / 2;
		float perimetroTrapezio = baseMaiorTrapezio + baseMenorTrapezio + lado3Trapezio + lado4Trapezio;

		imprimirAreaPerimetro(areaTrapezio, perimetroTrapezio);

		break;

	case 5: ; // caso o usuario escolha lozango
		float diagonalMenorLozango, diagonalMaiorLozango, ladoLozango;

		printf("\n| Dados do lozango");

		printf("\n| Dados para a area do lozango\n");

		printf("- Diagonal menor do lozango: ");
		scanf("%f", &diagonalMenorLozango);

		printf("- Diagonal maior do lozango: ");
		scanf("%f", &diagonalMaiorLozango);

		printf("\n| Dados para o perimetro do trapezio\n");

		printf("- Lado do lozango: ");
		scanf("%f", &ladoLozango);

		float areaLozango = (diagonalMaiorLozango * diagonalMenorLozango) / 2;
		float perimetroLozango = ladoLozango * 4;

		imprimirAreaPerimetro(areaLozango, perimetroLozango);

		break;

	case 6: ; // caso o usuario escolha circulo
		const float pi = 3.14;
		float raio;

		printf("\n| Dados do Círculo");

		printf("\n- Insira o raio do circulo: ");
		scanf("%f", &raio);

		float areaCirculo = pi * raio * raio;
		float perimetroCirculo = 2 * pi * raio;

		imprimirAreaPerimetro(areaCirculo, perimetroCirculo);
		break;
	}

    return 0;
}
