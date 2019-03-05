SECTIONS{

  . = 0x5db8000;
  .text : { *(.text) }
  . = 0x65b8000;
  .data : { *(.data) }
}
