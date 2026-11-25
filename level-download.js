(()=>{
const button=document.querySelector('#download-level-json'),raw=document.querySelector('#rawlevel'),status=document.querySelector('#download-level-status');
button.addEventListener('click',()=>{
try{
const selection=JSON.parse(raw.dataset.selection),data=JSON.parse(raw.textContent),content={selection,...data};
const filename=`loop-sort-${selection.dataset}-level-${selection.displayLevel}-source-${selection.sourceId}.json`;
const url=URL.createObjectURL(new Blob([JSON.stringify(content,null,2)+'\n'],{type:'application/json;charset=utf-8'}));
const link=document.createElement('a');link.href=url;link.download=filename;document.body.appendChild(link);link.click();link.remove();setTimeout(()=>URL.revokeObjectURL(url),1000);
status.textContent=`Đã tạo file: ${filename}`;
}catch(error){status.textContent='Chưa tải được JSON. Hãy chọn level và thử lại.';}
});
new MutationObserver(()=>{status.textContent=''}).observe(raw,{childList:true,characterData:true,subtree:true});
})();
