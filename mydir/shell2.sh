echo "ENTER THE YEAR"
read y
if[$((y%4)) -eq 0];then
  if[$((y%100)) -eq 0];then
      if[$((y%400)) -eq 0];then
      echo $y is a leep year
      else
      echo  $y is not a leap year
      fi
      else 
      echo  "$y is a leap yead"
      fi
      else 
      echo "$y is not a leap year
      fi
       