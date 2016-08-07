pure function f(x) !funcao para calcular x^2-3
	real, intent(in) :: x
	real :: y
	y = (x**2)-3
end function
      
program main

	real :: a, b, fa, fb, fx, erro
	real, dimension(1:2) :: x
	integer :: k = 0

	a = 1
	b = 2

	print*,"a","fa","b","fb"

	do 	
		fa = f(a)
		fb = f(b)
	
		x(k) = (a + b)/2
		fk = f(x(k))
		
		if( (f(a)*f(x(k))) > 0) then
			a = x(k);
		else
			b = x(k);
		end if
	
		if (k > 0) then
			erro = (x(k) - x(k-1))/x(k)
			if (erro < 0) then	!gambiarra para modulo!
				erro = erro * (-1)
			end if

			print*,k,a,fa,b,fb,x(k),fk,erro

			if(erro < 0.01) then
				exit
			end if
		else
			print*,k,a,fa,b,fb,x(k),fk,"-----"
		end if
		
		k = k+1
	end do
end program main
