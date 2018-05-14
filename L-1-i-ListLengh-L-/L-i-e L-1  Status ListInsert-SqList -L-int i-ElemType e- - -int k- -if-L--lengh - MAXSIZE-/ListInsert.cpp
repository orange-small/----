//初始条件：顺序线性表L存在，1<i<ListLengh(L)
//操作结果：在L中第i个位置之前插入新的数据元素e L长度+1 
Status ListInsert(SqList *L,int i,ElemType e)
{
	int k;
	if(L->lengh == MAXSIZE)  //线性表已满
	{
		return ERROR;
	} 
	if(i<1 || i>L->length+1) //
}
