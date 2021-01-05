#include<iostream>
using namespace std;

int* new_arr(int, int*);//기존의 배열보다 3개 더 큰 배열을 늘리는 것. 그 늘린 배열에 기존의 값들을 채워넣고, 배열을 반환한다
			//ex)13254를 인자로 받으면(크기 5짜리 배열) 13254(크기 8짜리 배열)을 돌려준다

int main()
{
    int index = 0;
    int arr_size = 5;
    int flag;
    int* arr = (int*)malloc(sizeof(int) * arr_size);//1.일단 처음에 arr_size(5)만큼 동적 할당을 받는다
   
    while (1) {
	while (1)
	{
	    scanf("%d", &arr[index++]);//2.arr[0], arr[1],arr[2],arr[3]...을 받는다, 근데 만약 중간에 -1이 나오거나(3.), 배열크기(처음에 5인거 ㅋㅋ)를 넘어가면(4.)
	    if (arr[index - 1] == -1) {//(3. flag를 1로 세팅해주고 탈출해서 6로간다)
		flag = 1;
		break;
	    }
	    else if (index > arr_size - 1) {//4.flag를 0으로 세팅해주고 탈출해서 5으로 간다
		flag = 0;
		break;
	    }
	   
	}

	if (flag == 0) {//5
	    arr = new_arr(arr_size, arr);//arr은, 1.번에서 가리키고 있던 메모리가 아니라, 새로운 메모리(new_arr)을 가리키게 된다(new_arr이 어떤건지는 함수 참조)
	}
	if (flag == 1) {//6 배열을 처음부터 끝까지 출력해준다(-1받고 탈출한거니깐, 출력해 줘야지 ㅋㅋㅋ)
	    for (int i = 0; i < index; i++)
		printf("%d ", arr[i]);
	    free(arr);
	    return 0;
	}
	arr_size = arr_size + 3;//배열의 크기를 3늘려주는 역할, new_arr함수에서 size인자에 박힌다 30번째 줄에서
    }
    return 0;
}

int* new_arr(int size, int* fp)
{
    int new_size = size + 3;
    int* new_arr = (int*)malloc(sizeof(int) * new_size);
    for (int i = 0; i < size  ; i++)
	new_arr[i] = fp[i];
    return new_arr;
}
