/* IL2CPP: MainPlaySession$$get_HasBoosters
bool MainPlaySession__get_HasBoosters (MainPlaySession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MainPlaySession$$get_HasBoosters
   bool MainPlaySession__get_HasBoosters (MainPlaySession_o* __this, const MethodInfo* method); */

bool MainPlaySession__get_HasBoosters_24fbc90(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bd52 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bd52 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  iVar2 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar3 + 0xb8) + 0x60);
  return 1 < iVar2;
}

