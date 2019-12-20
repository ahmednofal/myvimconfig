nnoremap <leader>ap :put =expand('#:p')<CR>
nnoremap <leader>cp :put =expand('%:p')<CR>
let g:calendar_google_calendar = 1
" let g:calendar_google_task = 1

vmap <Leader>a= :Tabularize /=<CR>
vmap <Leader>a: :Tabularize /:<CR>
vmap <Leader>a:: :Tabularize /:\zs<CR>
vmap <Leader>a, :Tabularize /,<CR>
vmap <Leader>a<Bar> :Tabularize /<Bar><CR>
set number relativenumber
" nmap , $p
set guifont=Source\ Code\ Pro\ 12
set number
set lines=60
set columns=150
nmap <S-Enter> O<Esc>
nmap <CR> o<Esc>
nnoremap <space> i<space><esc>
set belloff=all
autocmd VimEnter * NERDTree
let NERDTreeShowHidden=1
map <leader>m :NERDTreeToggle<cr>
colorscheme gruvbox
set nohlsearch
" jedi-vim configs
let g:jedi#goto_command = "<leader>d"
let g:jedi#goto_assignments_command = ""
let g:jedi#goto_definitions_command = "<leader>]"
let g:jedi#documentation_command = "K"
let g:jedi#usages_command = "<leader>n"
let g:jedi#completions_command = "<C-Space>"
let g:jedi#rename_command = ""
let g:languagetool_jar='$HOME/Downloads/LanguageTool-4.6/LanguageTool-4.6/languagetool-commandline.jar'
nnoremap <leader>g :Ack! 
nnoremap <leader>i :TagbarToggle<CR>
nnoremap = :vertical resize +5<CR>
nnoremap - :vertical resize -5<CR>

nnoremap + :resize +5<CR>
nnoremap _ :resize -5<CR>
highlight Normal  guibg=#002B36 gui=NONE ctermfg=254 ctermbg=235 cterm=NONE
highlight NonText guibg=#002B36 gui=NONE ctermfg=246 ctermbg=235 cterm=NONE
set switchbuf=usetab,useopen
set tw=60
nnoremap <leader>nl :let g:ale_set_signs=0<cr>
set clipboard=unnamedplus
autocmd BufReadPost * RainbowParenthesesToggleAll
" autocmd TextChanged,TextChangedI <buffer> silent write
" autocmd filetype markdown call AutoCorrect()
