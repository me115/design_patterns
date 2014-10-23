///////////////////////////////////////////////////////////
//  Subject.cpp
//  Implementation of the Class Subject
//  Created on:      07-十月-2014 23:00:10
//  Original author: cl
///////////////////////////////////////////////////////////

#include "Subject.h"

Subject::Subject(){

}

Subject::~Subject(){

}

void Subject::attach(Obeserver * pObeserver){
	m_vtObj.push_back(pObeserver);
}

void Subject::detach(Obeserver * pObeserver){
	for(vector<Obeserver*>::iterator itr = m_vtObj.begin();
		itr != m_vtObj.end(); itr++)
	{
		if(*itr == pObeserver)
		{
			m_vtObj.erase(itr);
			return;
		}			
	}
}

void Subject::notify(){
	for(vector<Obeserver*>::iterator itr = m_vtObj.begin();
		itr != m_vtObj.end();
	 	itr++)
	{	
		(*itr)->update(this);		
	}
}