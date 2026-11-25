/* IL2CPP: ProductMetadata$$get_IsPurchased
bool ProductMetadata__get_IsPurchased (ProductMetadata_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProductMetadata$$get_IsPurchased
   bool ProductMetadata__get_IsPurchased (ProductMetadata_o __this, const MethodInfo* method); */

bool ProductMetadata__get_IsPurchased_254b044(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = CloudPrefsInt__HasValue_24e9b24(param_1 + 0x38,0);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x38,0);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

