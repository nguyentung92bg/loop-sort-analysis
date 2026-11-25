/* IL2CPP: HomeLiveOpsSheet.Slot$$MoveToNext
void HomeLiveOpsSheet_Slot__MoveToNext (HomeLiveOpsSheet_Slot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeLiveOpsSheet.Slot$$MoveToNext
   void HomeLiveOpsSheet_Slot__MoveToNext (HomeLiveOpsSheet_Slot_o* __this, const MethodInfo*
   method); */

void HomeLiveOpsSheet_Slot__MoveToNext_2561620(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 02661634 to 0276163f has its CatchHandler @ 02661b8c */
  if ((bRam0000000004f4c122 & 1) == 0) {
                    /* try { // try from 02661644 to 02761663 has its CatchHandler @ 02661bd0 */
    FUN_021f03f8(PTR_DAT_049c9c48);
    bRam0000000004f4c122 = 1;
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uStack_60;
  uStack_38 = uStack_58;
  uStack_30 = uStack_50;
  uStack_28 = uStack_48;
  iVar3 = CloudPrefsInt__get_Value_24e99c0(&uStack_60,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x18);
                    /* try { // try from 02661678 to 02761687 has its CatchHandler @ 02661bb0 */
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (iVar3 + 1) / iVar1;
    }
                    /* try { // try from 02661688 to 02761697 has its CatchHandler @ 02661bac */
    CloudPrefsInt__Set_24e9aa8(&uStack_40,(iVar3 + 1) - iVar2 * iVar1,0);
                    /* try { // try from 02661698 to 027616a7 has its CatchHandler @ 02661ba4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

