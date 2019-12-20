
  function! typora#launch()
      " Launch Typora
      call system("typora \"" . expand("%") . "\"")
      " call system("typora")
      " silent exec "!Typora"
      setlocal autoread
  endfunction

  command! Typora call typora#launch()

