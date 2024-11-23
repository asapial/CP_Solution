import PyPDF2
from googletrans import Translator
from fpdf import FPDF

# Function to extract text from PDF
def extract_text_from_pdf(pdf_path):
    with open(pdf_path, 'rb') as file:
        reader = PyPDF2.PdfReader(file)
        text = ''
        for page_num in range(len(reader.pages)):
            page = reader.pages[page_num]
            text += page.extract_text()
        return text

# Function to translate text using Google Translate
def translate_text_to_bangla(text):
    translator = Translator()
    translated = translator.translate(text, dest='bn')  # 'bn' is the language code for Bangla
    return translated.text

# Function to create a translated PDF
def create_translated_pdf(text, output_pdf_path):
    pdf = FPDF()
    pdf.add_page()
    pdf.set_font('Arial', size=12)

    # Add the translated text to the PDF
    for line in text.split('\n'):
        pdf.cell(200, 10, txt=line, ln=True)
    
    # Save the output PDF
    pdf.output(output_pdf_path)

# Main function to translate PDF
def translate_pdf_to_bangla(input_pdf_path, output_pdf_path):
    # Extract text from the input PDF
    original_text = extract_text_from_pdf(input_pdf_path)

    # Translate the text to Bangla
    translated_text = translate_text_to_bangla(original_text)

    # Create a new PDF with the translated text
    create_translated_pdf(translated_text, output_pdf_path)

# Example usage
input_pdf = 'Data-Communications-and-Network-5e (1).pdf'  # Path to the input PDF
output_pdf = 'translated_output.pdf'  # Path to the translated output PDF
translate_pdf_to_bangla(input_pdf, output_pdf)

print("Translation complete! Translated PDF saved as", output_pdf)
