/* IL2CPP: RemoteConfigModule$$GetActiveCohortNames
System_String_array* RemoteConfigModule__GetActiveCohortNames (RemoteConfigModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RemoteConfigModule$$GetActiveCohortNames
   System_String_array* RemoteConfigModule__GetActiveCohortNames (RemoteConfigModule_o* __this,
   const MethodInfo* method); */

void RemoteConfigModule__GetActiveCohortNames_255378c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 0265378c to 027537d7 has its CatchHandler @ 02653478 */
  if ((bRam0000000004f4c090 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caf00);
    bRam0000000004f4c090 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0265382c to 0275382f has its CatchHandler @ 02653848 */
    FUN_021f06a0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
                    /* try { // try from 026537d8 to 027537e3 has its CatchHandler @ 02653834 */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049caf00) {
                    /* try { // try from 02653808 to 0275380f has its CatchHandler @ 0265397c */
                    /* try { // try from 02653810 to 02753813 has its CatchHandler @ 0265385c */
                    /* try { // try from 02653814 to 02753817 has its CatchHandler @ 02653878 */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_02653818;
      }
      uVar3 = uVar3 - 1;
                    /* try { // try from 026537f0 to 027537ff has its CatchHandler @ 02653830 */
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049caf00,2);
LAB_02653818:
                    /* try { // try from 02653818 to 0275381b has its CatchHandler @ 02653858 */
                    /* try { // try from 0265381c to 0275381f has its CatchHandler @ 02653874 */
                    /* try { // try from 02653820 to 02753823 has its CatchHandler @ 02653978 */
                    /* try { // try from 02653824 to 02753827 has its CatchHandler @ 02653854 */
                    /* WARNING: Could not recover jumptable at 0x02653828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 02653828 to 0275382b has its CatchHandler @ 0265384c */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

