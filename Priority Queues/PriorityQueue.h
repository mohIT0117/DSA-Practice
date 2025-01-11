
class PriorityQueue{

	vector<int> pq;

public:

	PriorityQueue(){

	}

	bool isEmpty(){
		return pq.size() == 0;
	}

	int getSize(){
		
		return pq.size();
	}

	int getMin(){
		if( isEmpty() ){
			return 0;
		}
		return pq[0];
	}

	void insert( int ele ){

		pq.push_back( ele );
		int childIndex = pq.size() - 1;

		while( childIndex > 0 ){

			int parentIndex = ( childIndex - 1 ) / 2;

			if ( pq[childIndex] < pq[parentIndex] )
			{
				int temp =  pq[childIndex];
			 	pq[childIndex] = pq[parentIndex];
			 	pq[parentIndex] = temp;
			}
			else {
				break;
			}

			childIndex = parentIndex;
		}

	}

	int removeMin(){

		if ( isEmpty() )
		{
			return 0;
		}

		int ans = pq[0];

		pq[0] = pq[pq.size()-1];
		pq.pop_back();

		int parentIndex = 0;
		int LchildIndex = 2*parentIndex + 1;
		int RchildIndex = 2*parentIndex + 2;


		while( LchildIndex < pq.size() ){

			int minIndex = parentIndex;

			if ( pq[LchildIndex] < pq[minIndex] )
			{
				minIndex = LchildIndex;
			}
			 if ( pq[RchildIndex] < pq[parentIndex] && RchildIndex < pq.size() )
			{
				minIndex = RchildIndex;
			}
			if (minIndex == parentIndex)
			{
				break;
			}

			swap( pq[minIndex], pq[parentIndex] );
			LchildIndex = 2*parentIndex + 1;
			RchildIndex = 2*parentIndex + 2;

		}



		return ans;
	}
};
