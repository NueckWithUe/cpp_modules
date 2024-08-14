#include "Account.hpp"

Account::Account( void )
{
	_nbDeposits = 0;
}

Account::Account( int initial_deposit )
{
	_nbDeposits = initial_deposit;
}

Account::~Account( void )
{
}


int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
}

void	Account::_displayTimestamp( void )
{
}


void	Account::makeDeposit( int deposit )
{
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal < _nbDeposits)
		return (false);
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
}